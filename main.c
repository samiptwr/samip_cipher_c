#include<stdio.h>

void encrypt();
void decrypt();
char encryptionPattern(char data);
char decryptionPattern(char data);


int main(){
   printf("\t\t\tEncryption And Decryption Tool (Samip Cipher)\n");
   printf("\t 1, Encryption \t\t\t 2, Decryption\n");
   int choise;
   while(1){
      scanf("%d", &choise);
      if(choise == 1){
         encrypt();
         break;
      } else if(choise == 2){
         decrypt();
         break;
      } else {
         printf("Invalid Input!\n");
      }
   }
}

void encrypt() {
   int characterCount;
   printf("\t\tEncryption Tool\n");

   printf("How many character do you want: ");
   scanf("%d", &characterCount);

   char message[characterCount];

   printf("Enter the message to be encrypted: ");
   scanf("%s", &message);
   
   char newMessage[characterCount];

   for(int i = 0; i < characterCount; i++){
      char newChar = encryptionPattern(message[i]);
      newMessage[i] = newChar;
   }

   printf("Encrypted Message: %s\n", newMessage);
}

void decrypt() {
   int characterCount;
   printf("\t\tDecryption Tool\n");

   printf("How many characters do you want: ");
   scanf("%d", &characterCount);

   char message[characterCount];

   printf("Enter the encrypted message: ");
   scanf("%s", &message);

   char newMessage[characterCount];

   for(int i = 0; i < characterCount; i++){
      char newChar = decryptionPattern(message[i]);
      newMessage[i] = newChar;
   }
   printf("Decrypted Message: %s\n", newMessage);
}

char encryptionPattern(char data){
   if (data == 'a') return '*';
   if (data == 'b') return '4';
   if (data == 'c') return '#';
   if (data == 'd') return '9';
   if (data == 'e') return '!';
   if (data == 'f') return '0';
   if (data == 'g') return '7';
   if (data == 'h') return '^';
   if (data == 'i') return '&';
   if (data == 'j') return '8';
   if (data == 'k') return '2';
   if (data == 'l') return '@';
   if (data == 'm') return '5';
   if (data == 'n') return '%';
   if (data == 'o') return '1';
   if (data == 'p') return '3';
   if (data == 'q') return '6';
   if (data == 'r') return '(';
   if (data == 's') return ')';
   if (data == 't') return '?';
   if (data == 'u') return 'z';
   if (data == 'v') return 'x';
   if (data == 'w') return 'c';
   if (data == 'x') return 'v';
   if (data == 'y') return 'b';
   if (data == 'z') return 'n';

   if (data == '0') return 'a';
   if (data == '1') return 's';
   if (data == '2') return 'd';
   if (data == '3') return 'f';
   if (data == '4') return 'g';
   if (data == '5') return 'h';
   if (data == '6') return 'j';
   if (data == '7') return 'k';
   if (data == '8') return 'l';
   if (data == '9') return 'q';

   if (data == '!') return '!';
   if (data == '@') return '#';
   if (data == '#') return '$';
   if (data == '$') return '%';
   if (data == '%') return '^';
   if (data == '^') return '&';
   if (data == '&') return '*';
   if (data == '*') return '(';
   if (data == '(') return ')';
   if (data == ')') return '_';
   if (data == ' ') return '.';
}

char decryptionPattern(char data){
   if (data == '*') return 'a';
   if (data == '4') return 'b';
   if (data == '#') return 'c';
   if (data == '9') return 'd';
   if (data == '!') return 'e';
   if (data == '0') return 'f';
   if (data == '7') return 'g';
   if (data == '^') return 'h';
   if (data == '&') return 'i';
   if (data == '8') return 'j';
   if (data == '2') return 'k';
   if (data == '@') return 'l';
   if (data == '5') return 'm';
   if (data == '%') return 'n';
   if (data == '1') return 'o';
   if (data == '3') return 'p';
   if (data == '6') return 'q';
   if (data == '(') return 'r';
   if (data == ')') return 's';
   if (data == '?') return 't';
   if (data == 'z') return 'u';
   if (data == 'x') return 'v';
   if (data == 'c') return 'w';
   if (data == 'v') return 'x';
   if (data == 'b') return 'y';
   if (data == 'n') return 'z';

   if (data == 'a') return '0';
   if (data == 's') return '1';
   if (data == 'd') return '2';
   if (data == 'f') return '3';
   if (data == 'g') return '4';
   if (data == 'h') return '5';
   if (data == 'j') return '6';
   if (data == 'k') return '7';
   if (data == 'l') return '8';
   if (data == 'q') return '9';

   if (data == '!') return '!';
   if (data == '#') return '@';
   if (data == '$') return '#';
   if (data == '%') return '$';
   if (data == '^') return '%';
   if (data == '&') return '^';
   if (data == '*') return '&';
   if (data == '(') return '*';
   if (data == ')') return '(';
   if (data == '_') return ')';
   if (data == '.') return ' ';
}
