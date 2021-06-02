#ifndef __CURSO_H__
#define __CURSO_H__
#include "Point.h"
#include "Curso.h"
#include <string>
#include <iostream>

class Curso {
        std::string nombre;
        double notaFinal;
        int totalEstudiantes;
        std::string codigo;
    public:

        Curso(std::string _nombre = "", double _notaFinal = 0, int _totalEstudiantes = 0, std::string _codigo = ""): nombre(_nombre), notaFinal(_notaFinal), totalEstudiantes(_totalEstudiantes), codigo(_codigo){}
        
        //Setter
        void setNombre(std::string nombre){
            this->nombre=nombre;
        }
        void setNotaFinal(double notaFinal){
            this->notaFinal=notaFinal;
        }
        void setTotalEstudiantes(int totalEstudiantes){
            this->totalEstudiantes = totalEstudiantes;
        }
        void setCodigo(std::string codigo){
            this->codigo=codigo;
        }

        //Getter
        std::string getNombre()const;
        double getNotaFinal()const;
        int getTotalEstudiantes()const;
        std::string getCodigo()const;
        
        friend std::ostream& operator << (std::ostream &out, const Curso &p);
};

double Curso::getNotaFinal() const{
    return notaFinal;
}

int Curso::getTotalEstudiantes() const{
    return totalEstudiantes;   
}

std::string Curso::getNombre() const{
    return nombre;
}

std::string Curso::getCodigo() const{
    return codigo;
}
std::ostream& operator << (std::ostream &out, const Curso &p){
    out<<p.getNombre() << ", " << p.getNotaFinal() << ", "<<p.getTotalEstudiantes() << ", " << p.getCodigo();
    return out;
}
#endif