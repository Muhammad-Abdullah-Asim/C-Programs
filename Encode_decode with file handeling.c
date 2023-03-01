#include <stdio.h>
#include <string.h>

void encode(char *word, FILE *output_file)
 {
  for (int i = 0; i < strlen(word); i++) {
    char c = word[i];
    int num_rounds = (c - 'A') / 26;
    char encoded_c = (c - 'A') % 26 + 'A';
    fprintf(output_file, "%c%d", encoded_c, num_rounds);
  }
}

void decode(char *word, FILE *input_file) {
  for (int i = 0; i < strlen(word); i++) {
    char encoded_c = word[i];
    int num_rounds = word[i + 1] - '0';
    char c = encoded_c - 'A' + num_rounds * 26 + 'A';
    printf("%c", c);
    i++;
  }
}

int main() {
  // Open the input file
  FILE *input_file = fopen("input.txt", "r");
  if (input_file == NULL) {
    perror("Error opening input file");
    return 1;
  }

  // Open the output file
  FILE *output_file = fopen("output.txt", "w");
  if (output_file == NULL) {
    perror("Error opening output file");
    return 1;
  }

  // Read the word from the input file and encode it
  char word[10];
  fscanf(input_file, "%s", word);
  encode(word, output_file);

  // Close the input and output files
  fclose(input_file);
  fclose(output_file);

  // Open the output file for reading
  output_file = fopen("output.txt", "r");
  if (output_file == NULL) {
    perror("Error opening output file");
    return 1;
  }

  // Read the encoded word from the output file and decode it
  fscanf(output_file, "%s", word);
  decode(word, output_file);
  printf("\n");

  // Close the output file
  fclose(output_file);

  return 0;
}
