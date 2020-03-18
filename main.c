#include <stdio.h>
#include <stdbool.h>
#include "list.h"

int main()
{
	list *l;
	l = create_list();
	int menu=0,mainmenu=0;
	
	DATA date,prueba;
	while(mainmenu!=3){
		printf("1)Cola circular\n2)Bicola\n3)Salir\n");
		scanf("%d",&mainmenu);
		switch(mainmenu){
			case 1:
				while(menu!=5){
					printf("1)Encolar.\n2)Desencolar.\n3)Imprimir lista.\n4)Borrar lista.\n5)Salir.\n");
					scanf("%d",&menu);
					switch(menu){
						case 1:
							printf("Escriba el numero\n");
							scanf("%d",&date);
							add_bq(l,date,true);
							print_list(l, true);
							break;
						case 2:
							prueba=remove_bq(l, true);
							printf("%d",prueba);
							print_list(l, true);
						case 3:
							print_list(l, true);
							break;
						case 4:
							empty(l,true);
							break;
						case 5:
							printf("Regresando al menu principal.\n");
							break;
					}
				}
				remove_list(l, true);
				break;
			case 2:
				while(menu!=7){
					printf("1)Agregar al principio.\n2)Agregar al final\n3)Remover al principio.\n4)Remover al final\n5)Imprimir lista.\n6)Borrar lista.\n7)Salir.\n");
					scanf("%d",&menu);
					switch(menu){
						case 1:
							printf("Escriba el numero\n");
							scanf("%d",&date);
							add_bq(l,date,true);
							print_list(l, false);
							break;
						case 2:
							printf("Escriba el numero\n");
							scanf("%d",&date);
							add_bq(l,date,false);
							print_list(l, false);
							break;
						case 3:
							remove_bq(l,true);
							print_list(l, false);
							break;
						case 4:
							prueba=remove_bq(l, false);
							printf("%d",prueba);
							print_list(l, false);
						case 5:
							print_list(l, false);
							break;
						case 6:
							empty(l,false);
							break;
						case 7:
							printf("Regresando al menu principal.\n");
							break;
					}
				}
				remove_list(l, false);
				break;
			case 3:
				printf("Hasta luego.\n");
				break;
		}
	}
	remove_list(l, false);
	return 0;
}
