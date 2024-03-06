# Strings

## ASCII codes

```
A -> 65   a -> 97   0 -> 48
B -> 66   b -> 98   1 -> 49
C -> 67   c -> 99   2 -> 50
.         .         .
.         .         .
.         .         .
Z -> 90   z -> 122  9 -> 57
```

- ASCII code has 128 elements;
- 7 bits is sufficient to represent 128 elements -> 2⁷=128;

## Unicodes

- Unicode has 2 bytes or 16 bits;
- Each code has 4 x 4 bits;

## How to declare a character type variable in C and C++

```c++
//c
char temp;              //A
temp = 'A'; //=> temp = | 65 |
printf("%c", temp);

char X[5];
char Y[5] = {'A', 'B', 'C', 'D', 'E'};
char Z[] = {'A', 'B', 'C', 'D', 'E'};
char  A[5] = {65, 66, 67, 68, 69};

char name[10] = {'J', 'o', 'h', 'n', '\0'};
// Array of characters
// name => |J||o|h|n|\0|0|0|0|0|0|
// string delimeter => '\0'
char name[] = "John";

scanf("%s", name);
gets(name);
printf("%s", name);

//c++
cout<<temp<<endl;
```

## Length of a string
```c
findLength(char string[]){
    int i = 0;
    while string[i] != '\0'{
        i++;
    }

    return i;
}

int main(){
    char s[] = "welcome";

    int length = findLength(s);

    printf("Length is %d", length);

    return 0;
}
```

## Changing Case

```c

char[] changingCase(char string[]){
    for (int i=0; string[i] != '\0'; i++){
        string[i] = string[i]+32;
    }

    return string;
}

char[] toggleCase(char string[]){
    for(int i=0; string[i] != '\0'; i++){
        if (string[i] >= 65 && string[i] <= 90>){
            string[i]+=32
        }
        else if (string[i] >= 97 && string[i]<= 122){
            string[i]-= 32
        }
    }
    return string
}

int main(){
    char A[] = "WELCOME";

    lower_string = changingCase(A);

    printf("%s", lower_string);
}
```

## Counting vowels and consonents

```c
int main(){
    char A[] = "How are you";
    int i, vcount=0, ccount=0;

    for(i=0; A[i] != '\0'; i++){
        if (A[i] == 'a' || A[i] == 'e'|| A[i] == 'i' || A[i] == 'o' || A[i] == 'u' || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U'){
            vcount++;
        }
        else if ((A[i]>=65 && A[i] <= 90) || (A[i]>=97 && A[i] <= 122)){
            ccount++;
        }
    }

    return 0;
}
```

## Validade a string

```c

int validation(char *name){
    int i;
    for(i = 0; name[i] != '\0'; i++){
        if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i] == 48 || name[i] == 57)){
            return 0;
        }
    }
    return 1;
}

int main(){

    char *name = "Ani?321";

    if(validation(name)){
        printf("Valid String!");
    }
    else {
        printf("Ivalid String");
    }

    return 0;
}
```

## Reversing a String

- Method 01:

```c
int main(){

    char A[] = "python";
    char B[7];
    int i,j;

    for(i = 0; A[i] != '\0'; i++){

    }

    i -= 1;

    for (j=0; i>=0; i--; j++){
        B[j] = A[i];
    }

    B[j] = '\0';

    printf("%s", B);

    return 0; 
}
```

- Method 02:

```c
int main(){

    char A[] = "python";
    char t;
    int i, j;

    for (j=0; A[j] != '\0'; j++){}

    j = j-1;

    for(i=0; i<j; i++; j--){
        t = A[i];
        A[i] = A[j];
        A[j] = t;
    }

    printf("%s", A);

    return 0;
}
```

## Comparing Strings and Palindrome

```c
char A[] = "Painter";
char B[] = "Painting";
int i, j;

for (i=0, j=0; A[i] != '\0' && B[j] != '\0'; i++, j++){
    if (A[i]!=B[j]){
        break;
    }
}
if (A[i] == B[j]){
    printf("Equal!");
}
else if (A[i]<B[j]){
    printf("Smaller!");
}
else {
    printf("Greater!");
}
```

## Finding Duplicates in a String

- Using Hashtable:
```c
int main(){
    char A[] = "finding";
    int H[26], i;

    for(i=0; A[i] != '\0'; i++){
        H[A[i]-97]++;
    }

    for (i=0; i<26;i++){
        if (H[i]>1){
            printf("-> %c repeated %d times.\n", i+97, H[i]);
        }
    }
}
```

-Bitwise Operations:
```c
int main(){
    char A[] = "finding";
    long int H = 0, x=0;

    for (int i = 0; A[i] != '\0'; i++){
        x = 1;
        x = x<<(A[i]-97);

        if ((x&H) > 0){
        printf("%c is duplicate", A[i]);
        else {
            H = x||H;
        }
    }
    }
    

}
```