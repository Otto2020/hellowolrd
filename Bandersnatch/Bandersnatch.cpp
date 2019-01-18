#include<iostream>
#include<stdlib.h>
#include<locale.h>

using namespace std;
	
int metaSelect,breakSelect,musicSelect,ofertSelect,tryagainOffer,momStory,vinylSelect,angerSelect,tryagainAgner;

string name;

void userName();
void metaIntroduction();
void sugarPuffsFrosties();
void twinsNow2();
void momStoryTell();
void vinylChoice();

int main (){
	setlocale(LC_ALL, "spanish");
	userName();
	cout<<"\t\t\t\t---Bienvenido a la experiencia Bandersnatch, "<<name<<"---"<<endl;
	cout<<"\t\tEsta historia esta basada en la pelicula original de Netflix Bandersnatch."<<endl; 
	cout<<"\t\tEsperamos que disfrutes la experiencia."<<endl<<endl; 
	system("pause"); system("cls");
	metaIntroduction();
	if(metaSelect==1){
		cout<<"\t\t\tEmpieza el juego"<<endl;
		system("pause");
		system("cls");
		cout<<"La historia empieza el 9 de Julio de 1,984 a las 8:30 AM"<<endl;
		cout<<"Estas en tu cuarto y te preparas para desayunar"<<endl<<endl;
		system("pause");
		system("cls");
		cout<<"\t\t\t\t\tTu papa te pregunta que quieres desayunar:\n"<<endl;
		cout<<"\t\t\t\t\t\t1.Sugar Puffs o 2.Frosties"<<endl;
		cout<<"\t\t\t\t\t\t\tSeleccion: ";
		cin>>breakSelect;
		system("cls");
		if(breakSelect==1){
			cout<<"Comere los Sugar Puffs papa\n"<<endl;
			system("pause");
			system("cls");
			sugarPuffsFrosties();
		} else if(breakSelect==2){
			cout<<"Comere los Frosties papa\n"<<endl;
			sugarPuffsFrosties();
			system("pause");
			system("cls");
		}
	}else if (metaSelect==2){
		cout<<"Gracias por intentarlo."<<endl;
		exit(0);
	}
	
	system("pause");
	return 0;
}

void userName(){
	cout<<"Ingresa tu nombre: ";
	cin>>name;
}

void metaIntroduction(){
	cout<<"La siguiente historia se adapta conforme a tus decisiones, todo acto tiene consecuencias."<<endl;
	cout<<"Por cada etapa de la historia podras ver 2 tipos de respuesta, siempre debes seleccionar una de las dos."<<endl<<endl;
	cout<<"\t\t\t\t\t¿Entendiste?"<<endl<<endl;
	cout<<"\t\t\t\t\t1.Si    2.No"<<endl;
	cout<<"\t\t\t\t\tSeleccion: "; 
	cin>>metaSelect; 
	system("cls");
}

void sugarPuffsFrosties(){
	cout<<"Sales de tu casa y subes el bus"<<endl;
	system("pause"); 
	system("cls");
	cout<<"\t\t\t\t\t  ¿Que quieres escuchar?\n"<<endl;
	cout<<"\t\t\t\t\t1.Thompson Twins    2.Now 2"<<endl;
	cout<<"\t\t\t\t\t\tSeleccion: "; 
	cin>>musicSelect;
	system("cls");
	if(musicSelect==1){
		cout<<"Elegiste escuchar a los Thompson Twins"<<endl;
		system("pause");
		system("cls");
		twinsNow2();
	}else if(musicSelect==2){
		cout<<"Elegiste escuchar a Now 2"<<endl;
		system("pause");
		system("cls");
		twinsNow2();
	}
}

void twinsNow2(){
	cout<<"Llegas a tu reunion en Tuckersoft, en donde conoces a  Mohan (tu proximo jefe)."<<endl;
	cout<<"                y a Colin Ritman (programador a quien tu admiras)."<<endl;
	system("pause"); 
	system("cls");
	cout<<"Te ofrecen terminar el juego en Tuckersoft con un grupo de gente a tu cargo"<<endl;
	cout<<"o puedes rechazar la oferta."<<endl<<endl;
	cout<<"\t\t\t\t\t1.Aceptas la oferta   2.Rechazas la oferta"<<endl;
	cout<<"\t\t\t\t\t\t\tSeleccion: ";
	cin>>ofertSelect;
	system("cls");
	if(ofertSelect==1){
		cout<<"Decidiste hacer el juego con el apoyo de la compañia."<<endl;
		system("pause");
		system("cls");
		cout<<"Por haber hecho el juego con la ayuda de Tuckersoft no tuviste suficiente tiempo para cuidar los detalles"<<endl;
		cout<<"El juego quedo a medias."<<endl;
		system("pause");
		system("cls");
		cout<<"La calificacion de tu juego es 0 estrellas de 5."<<endl;
		cout<<"HAS PERDIDO"<<endl;
		system("pause");
		system("cls");
		cout<<"Deseas volver a intentarlo?"<<endl;
		cout<<"1.SI   2.NO"<<endl;
		cin>>tryagainOffer;
		system("cls");
		if(tryagainOffer==1){
			twinsNow2();
		}else if(tryagainOffer==2){
			cout<<"Gracias por jugar"<<endl;
			exit(0);
		}
	} else if(ofertSelect==2){
		system("pause");
		system("cls");
		cout<<"Llegas a tu casa, tu papa te pregunta como te fue."<<endl;
		cout<<"Decides decirle que rechazaste la oferta de Tuckersoft pero aun trabajaras para ellos."<<endl;
		cout<<"Vas a programar el juego tu solo, la fecha de entrega es en Septiembre."<<endl;
		system("pause");
		system("cls");
		cout<<"Pasan los dias pero no te sientes muy bien, tu papa de lleva con la Dr. Haynes"<<endl;
		cout<<"            Decides contarle a la doctora el trato con Tuckersoft."<<endl;
		system("pause");
		system("cls");
		cout<<"La Dr. Haynes quiera hablar acerca de la muerte de tu madre."<<endl;
		cout<<"\t\t\t\t\t\t\t¿Quieres hacerlo?"<<endl<<endl;
		momStoryTell();
		system("cls");
	}
	
}

void momStoryTell(){
	cout<<"\t\t\t\t\t\t\t   1.Si  2.No"<<endl;
	cout<<"\t\t\t\t\t\t\t   Seleccion:";
	cin>>momStory;
	system("cls");
	if(momStory==1){
		cout<<"Esta bien, lo hare."<<endl;
		system("pause");
		system("cls");
		cout<<"Yo estaba buscando mi conejo de peluche y mi mama me estaba ayudando, ella tenia que irse."<<endl;
		cout<<"Yo la retrace, ella debia irse en el tren de las 8:00 y por buscar mi conejo se fue en el "<<endl;
		cout<<"de las 8:45. Me preguntó si queria irme con ella y yo le dije que no."<<endl;
		cout<<"Despues de irse vimos en las noticias con mi papa que el tren de las 8:45 habia tenido un "<<endl;
		cout<<"horrible accidente, por mi culpa ella subió a ese tren y murió."<<endl;
		cout<<"Me odio por eso."<<endl;
		system("pause");
		system("cls");
		cout<<"Al salir del consultorio de la Dr. Haynes me dirigi a comprar un disco de Vinil."<<endl;
		cout<<"\t\t\t\t\t  ¿Cual quieres comprar?\n"<<endl;
		cout<<"\t\t\t\t1.Phaedra   2.The Bermuda Triangle"<<endl;
		cout<<"\t\t\t\t\t\tSeleccion: "; 
		cin>>vinylSelect;
		system("cls");
		if(vinylSelect==1){
			cout<<"Escucharas Phaedra mientras programas el juego."<<endl;
			system("pause");
			system("cls");
			vinylChoice();
			}else if(musicSelect==2){
			cout<<"Escucharas The Bermuda Triangle mientras programas el juego."<<endl;
			system("pause");
			system("cls");
			vinylChoice();
			}
		}else if(momStory==2){
			cout<<"No quiero hacerlo."<<endl;
			system("pause");
			system("cls");
			cout<<"Lo preguntare de nuevo."<<endl;
			cout<<"¿"<<name<<", quieres hablar sobre lo que pasó con tu madre?"<<endl;
			momStoryTell();
		}

}

void vinylChoice(){
	cout<<"Llevas mucho tiempo trabajando en el juego, no logras resolver ciertos problemas."<<endl;
	cout<<"Estas estresado y no puedes concentrarte."<<endl;
	cout<<"Tu papa viene a ver que te pasa, tu solo quieres que se vaya."<<endl;
	cout<<"No para de decir que necesitas ayuda.\n"<<endl;
	cout<<"\t\t\t\t1. Tirar el te sobre la computadora    2.Gritarle a papa"<<endl;
	cout<<"\t\t\t\t\t\t\tSeleccion: "; 
	cin>>angerSelect;
	system("cls");
	if(angerSelect==1){
		cout<<"Decidiste tirar el té sobre tu computadora."<<endl;
		system("pause");
		system("cls");
		cout<<"Has arruinado la computadora, ahora no podras terminar el juego."<<endl;
		system("pause");
		system("cls");
		cout<<"La calificacion de tu juego es 0 estrellas de 5."<<endl;
		cout<<"HAS PERDIDO"<<endl;
		system("pause");
		system("cls");
		cout<<"Deseas volver a intentarlo?"<<endl;
		cout<<"1.SI   2.NO"<<endl;
		cin>>tryagainAgner;
		system("cls");
		if(tryagainAgner==1){
			vinylChoice();
		}else if(tryagainAgner==2){
			cout<<"Gracias por jugar"<<endl;
			exit(0);
		}
	}else if(angerSelect==2){
		cout<<"Decidiste gritarle a tu papa."<<endl;
		system("pause");
		system("cls");	
	}
}
