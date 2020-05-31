
package paquete;


public class Direccion_main {

    public static void main(String args[]){
        
        Estacionamiento estacionam = new Estacionamiento(10); 
        
        Automovil a1 = new Automovil("DS GS 3 1");
        System.out.println("============================================");
        System.out.println("        Estacionamiento");
        System.out.println("============================================");
        
        System.out.println("Estacionamiento disponibles"); 
        estacionam.estacionar(a1, 0); // un auto en la posicion 0
        
        estacionam.imprimirPlazas();
        estacionam.imprimirPlazasDisponibles();
     
        System.out.println("Precio a pagar: $"+estacionam.finalizarServicio(0));
        
    }
}
