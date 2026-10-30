#include <stdio.h>
#include <stdlib.h>

int retrait(int stock)
{
  int ret,result=0 ;

  printf("conmbien voulait vous retirer \n");
  scanf("%d",&ret);

  if (ret>stock)
  {
printf("ce nombre n'est pas disponibe |impossibilite de livrraison\n");
result=stock;
  }
else 
{
result=stock-ret;
}
return result;

}