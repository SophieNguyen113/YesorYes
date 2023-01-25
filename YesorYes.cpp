#include<bits/stdc++.h>
using namespace std;
char response;
void enter()
{
    scanf("%c",&response);
}
void data()
{
    printf("Besides my family and friends, be my favorite person? <3\n");  
               //Besides my family and friends, would you like to be my favorite person?
    printf("\n");
    printf("Please response Y or y for yes and N or n for no.\n");
    printf("\n");
    printf("Your response: ");
    if(response =='Y' || response =='y')
    {
        printf("Yes <3\n");
        printf("Text me back :>\n");
    }
    if(response =='N' || response == 'n')
    {
        printf("\n");
        printf("Error!!! Please try again!!!");
    }
}
int main()
{
    freopen("YesorYes.inp","r",stdin);
    freopen("YesorYes.out","w",stdout);
    enter();
    data();
}
