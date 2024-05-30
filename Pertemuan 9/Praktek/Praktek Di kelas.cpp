#include<stdio.h>
#include <iostream>

using namespace std;

typedef struct node{
 char data;
 node *kiri;
 node *kanan;
};

node *akar=NULL;
addNode(node **akar, char isi) {
 if((*akar)==NULL){
 node *baru;
 baru= new node;
 baru->data = isi;
 baru->kiri = NULL;
 baru->kanan = NULL;
 (*akar)=baru;
 }
}

preOrder(node *akar) {
 if(akar !=NULL) {
 cout<<("%c ", akar->data);
 preOrder(akar->kiri);
 preOrder(akar->kanan);
 }
}

inOrder(node *akar) {
 if(akar !=NULL) {
 inOrder(akar->kiri);
 cout<<("%c ", akar->data);
 inOrder(akar->kanan);
 }
}

postOrder(node *akar) {
 if(akar !=NULL) {
 postOrder(akar->kiri);
 postOrder(akar->kanan);
 cout<<("%c ", akar->data);
 }
}

main(){
char abjad;
cout<<("\n\n\tPosisi Awal Tree:\n\n");
cout<<("\t       R\n\t      / \\\n\t     A   E\n\t    /\n\t   S\n\t  / \\\n\t I   T\n\n");
addNode(&akar,abjad='R');
addNode(&akar->kiri,abjad='A');
addNode(&akar->kanan,abjad='E');
addNode(&akar->kiri->kiri,abjad='S');
addNode(&akar->kiri->kiri->kiri,abjad='I');
addNode(&akar->kiri->kiri->kanan,abjad='T');
 cout<<("Tampilan PreOrder  : ");
 preOrder(akar);
 cout<<("\nTampilan InOrder   : ");
 inOrder(akar);
 cout<<("\nTampilan PostOrder : ");
 postOrder(akar);
}
