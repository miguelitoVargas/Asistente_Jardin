/*El Asistente de Jardin es una libreria que contiene
 * varios metodos de ayuda para el jardinero urbano
 * en la lectura y toma de datos de diversos sensores,
 * tanto comerciales como DIY */

#pragma once
#ifndef Asistente_Jardin_h
#define Asistente_Jardin_h

#include "Arduino.h"
//#include "Sensor.h"

class Asistente_Jardin{

	private:

	public:
		explicit Asistente_Jardin();
		virtual ~Asistente_Jardin();
		int suma(int a, int b);
		void exit();
};	



















#endif
