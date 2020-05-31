
package paquete;

import java.time.LocalDateTime;
import java.time.temporal.ChronoUnit;


public class CalculadoraCosto {

   private int tarifaMinuto;
   
   CalculadoraCosto(int tarifaMinuto){
       this.tarifaMinuto = tarifaMinuto;
   }
   
   //metodos propios
   
    public long calcularTotal(LocalDateTime inicio,LocalDateTime termino){
            long total= 0;
            long tiempo;
            tiempo = inicio.until(termino, ChronoUnit.MINUTES);
            
            total = tiempo*tarifaMinuto;
            return total;
}

    public int getTarifaMinuto() {
        return tarifaMinuto;
    }

    public void setTarifaMinuto(int tarifaMinuto) {
        this.tarifaMinuto = tarifaMinuto;
    }
    
    
    
}
