
package paquete;

import java.time.LocalDateTime;


public class Registro {

    private LocalDateTime horaInicio ;
    private LocalDateTime horaTermino;
    
    private Plaza plaza;
   
    Registro(Plaza plaza){
        this.plaza = plaza;
        this.horaInicio = LocalDateTime.now();
      
    }
    
    //metodo propios
    
    public void finalizarRegistro(){
        this.horaTermino = LocalDateTime.now();
    }

    public LocalDateTime getHoraInicio() {
        return horaInicio;
    }

    public void setHoraInicio(LocalDateTime horaInicio) {
        this.horaInicio = horaInicio;
    }

    public LocalDateTime getHoraTermino() {
        return horaTermino;
    }

    public void setHoraTermino(LocalDateTime horaTermino) {
        this.horaTermino = horaTermino;
    }

    public Plaza getPlaza() {
        return plaza;
    }

    public void setPlaza(Plaza plaza) {
        this.plaza = plaza;
    }

    @Override
    public String toString() {
        return "\nHora Inicio:" + horaInicio + "\nHora Termino: " + horaTermino + "\nPlaza:" + plaza + '}';
    }
   
    
    
   
}
