
package paquete;

import java.util.ArrayList;


public class Plaza {

    private int numero;
    private boolean ocupado;
    
    //faltan atributos
    private Automovil autoEstacionado;
    
    Plaza(int numero){
        this.numero = numero;
    }
    
    //metodos propios..

    
    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public boolean isOcupado() {
        return ocupado;
    }

    public void setOcupado(boolean ocupado) {
        this.ocupado = ocupado;
    }

    public Automovil getAutoEstacionado() {
        return autoEstacionado;
    }

    public void setAutoEstacionado(Automovil autoEstacionado) {
        this.autoEstacionado = autoEstacionado;
    }

    @Override
    public String toString() {
        return "\nMatricula Automovil:" + autoEstacionado.getPatente() + "\nOcupado: " + isOcupado();
    }
   
    
    
}
