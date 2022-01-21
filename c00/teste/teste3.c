#include<stdio.h>
#include<string.h>
 
 char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
 
int main ()
{
    char str1[]="Hello Geeks!";
    char str2[] = "GeeksforGeeks";
    char str3[40];
    char str4[40];
    char str5[] = "GfG";
     
    ft_strcpy(str2, str1);
    ft_strcpy(str3, "Copy successful");
    ft_strcpy(str4, str5);
    printf ("str1: %s\nstr2: %s\nstr3: %s\nstr4:
                  %s\n", str1, str2, str3, str4);
    return 0;
}