package paquete;

import java.time.LocalDateTime;
import java.util.ArrayList;

public class Estacionamiento {
//falta asociaciones y atributos

    private int capacidad;
    private Registro registros[];//manejo de arreglo unidimensionales
    private Plaza plazas[];

    Estacionamiento(int capacidad) {
        plazas = new Plaza[capacidad];
        registros = new Registro[capacidad];
    }

    //metodos propios clase
    public boolean estacionar(Automovil autoCliente, int numeroPlaza) {
        boolean bandera = true;

        if (this.plazas[numeroPlaza] == null) {
            //instancias
            
            plazas[numeroPlaza] = new Plaza(numeroPlaza);
            registros[numeroPlaza] = new Registro(plazas[numeroPlaza]);
            
            plazas[numeroPlaza].setAutoEstacionado(autoCliente);
        
            plazas[numeroPlaza].setOcupado(bandera);
            bandera = true;
        } else {

            bandera = false;
        }
        return bandera;
    }

    public long finalizarServicio(int numeroPlaza) {
        long precioFinal;
        CalculadoraCosto calculadora = new CalculadoraCosto(300);

        registros[numeroPlaza].finalizarRegistro();
        precioFinal = calculadora.calcularTotal(registros[numeroPlaza].getHoraInicio(), registros[numeroPlaza].getHoraTermino());
        
        registros[numeroPlaza].getPlaza().setOcupado(false);
        System.out.println(registros[numeroPlaza].toString());
        
      precioFinal = calculadora.calcularTotal(registros[numeroPlaza].getHoraInicio(), registros[numeroPlaza].getHoraTermino());

        return precioFinal;
    }

    public void imprimirPlazas() {
        for (int i = 0; i < this.plazas.length; i++) {
            
            if(plazas[i] == null){
                System.out.println("Plaza disponible:"+i);
            }else{
            System.out.println("Plaza ocupada "+i);
            System.out.println(plazas[i].toString());
            }
        }
    }

    public void imprimirPlazasDisponibles() {
        System.out.println("Plazas disponibles");
        for (int i = 0; i < this.plazas.length; i++) {
            if (this.plazas[i]== null) {

                System.out.println("Lugar desocupado " + i);
            }

        }
    }
}
