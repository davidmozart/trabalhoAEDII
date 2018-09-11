#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;



int altura(arv *r) {
	if (r == NULL){
		return 0;
	}else{
		return r->alt;	
	}
}
arv *inserir (arv *r, int val, int op){
		if (r == NULL) {
			r = (arv*)malloc(sizeof(arv));
			r->val=val;
			r->esq=NULL;
			r->dir=NULL;
			r->alt=1;
		} else if (val < r->val) {
			r->esq  = inserir(r->esq, val, op);
		} else if (val > r->val)
			r->dir = inserir(r->dir, val, op);
		else { 
			return r;
		}
		r->alt = 1 + maior(altura(r->esq),altura(r->dir));
		if(fB(r)>1){
			if (val < r->esq->val){
				return rotDir(r);
			}else {
			r->esq =  rotEsq(r->esq);
			return rotDir(r);
			}
		} else if (fB(r)<-1){
			if (fB(r) < -1 && val > r->dir->val){
				return rotEsq(r);
			}else{
				r->dir = rotDir(r->dir);
				return rotEsq(r);
			}
		}	
		
	return r;

}



