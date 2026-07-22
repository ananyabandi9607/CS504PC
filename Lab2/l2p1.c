// charecter destuffing//
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int i = 6, j = 0;
    int n;
    printf("Enter the stuffed frame:\n");
    scanf("%s", a);
    n = strlen(a);
    while (i < n - 6)   // Ignore ending "dlestx"
	{
    if (a[i] == 'd' && a[i+1] == 'l' && a[i+2] == 'e')
    {
        i += 3;   // Skip "dle"
        i++;      // Skip stuffed character
        i += 3;   // Skip ending "dle"
    }
    else
    {
        b[j++] = a[i];
        i++;
    }
  }

    b[j] = '\0';

    printf("\nFrame after destuffing:\n%s\n", b);

    return 0;
}




