import sys
usuario1 = input("Ingrese su nombre jugador 1-> ")
usuario2 = input("Ingrese su nombre jugador 2-> ")
respuesta_usuario1 = input("%s, \npiedra,papel o tijera: " %usuario1)
respuesta_usuario2 = input("%s, \npiedra,papel o tijera: " %usuario2)

def juego(respuesta_usuario1, respuesta_usuario2,usuario1,usuario2):
    if respuesta_usuario1 == respuesta_usuario2:
        return("Es un empate")
    elif respuesta_usuario1 == 'piedra':
        if respuesta_usuario2 == 'tijera':
            return(usuario1," ud ha ganado!")
        else:
            return(usuario2," ud ha ganado!")
    elif respuesta_usuario1 == 'tijera':
        if respuesta_usuario2 == 'papel':
            return(usuario1," ud ha ganado!")
        else:
            return(usuario2," ud ha ganado!")
    elif respuesta_usuario1 == 'papel':
        if respuesta_usuario2 == 'piedra':
            return(usuario1," ud ha ganado!")
        else: 
            return(usuario2," ud ha ganado!")
    else:
        return("Entrada invalida, debe ser: pidra papel y tijera")
        sys.exit
print(juego(respuesta_usuario1,respuesta_usuario2,usuario1,usuario2))

