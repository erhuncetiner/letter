#include "sentences.h"
#include <iostream>
#include <fstream>
#include "verbs.h"
using namespace std;
sentences::sentences()
{	
//	verbs v1;
//	verbs v2;
	outloud();
	
}



void sentences::outloud(){
	int connected = rand() % 10 + 1;
	if (obj.says == "me"){
		if (sub.reflective == "myself"){
			obj.says = sub.reflective;
		}
		else {
		obj.says = obj.says;
		}
	}
	else if (obj.says == "you"	){	if (sub.reflective == "yourself"){
			obj.says = sub.reflective;
		}else {
		obj.says = obj.says;
		}}
	else if (obj.says == "her"	){	if (sub.reflective == "herself"){
			obj.says = sub.reflective;
		}else {
		obj.says = obj.says;
		}}
	else if (obj.says == "him")	{	if (sub.reflective == "himself"){
			obj.says = sub.reflective;
		}else {
		obj.says = obj.says;
		}}
	else if (obj.says == "it")	{	if (sub.reflective == "itself"){
			obj.says = sub.reflective;
		}else {
		obj.says = obj.says;
		}}
	else if (obj.says == "us")	{	if (sub.reflective == "ourselves"){
			obj.says = sub.reflective;
		}else {
		obj.says = obj.says;
		}}
	else if (obj.says == "them"	){	if (sub.reflective == "themselves"){
			obj.says = sub.reflective;
		}else {
		obj.says = obj.says;
		}}
	else if (obj.says == "you")	{	if (sub.reflective == "yourselves"){
			obj.says = sub.reflective;
		}else {
		obj.says = obj.says;
		}}
	
//	if (connected < 6){
	
	pronounce = sub.says + " " + verb.says + " " + obj.says + ". ";
//}
//else {
//
//	pronounce = sub.says + " " + verb.says + " " + obj.says + ", ";
//	
//	}
}
