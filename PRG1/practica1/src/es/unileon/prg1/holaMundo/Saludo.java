package es.unileon.prg1.holaMundo;
/**
 * Clase para mostrar por pantalla un mensaje de bienvenida.
 * 
 * @author PRG
 * @version 1.0
 */
class Saludo {
	/**
	 * Metodo que muestra por pantalla un mensaje de bienvenida. * *
	 * 
	 * @param mensaje
	 *            Mensaje a mostrar por pantalla.
	 */
	void saludar(String mensaje) {
		System.out.println(mensaje);
	}

	/**
	 * * Metodo principal de la clase. * *
	 * 
	 * @param args
	 *            Argumentos de la linea de comandos.
	 */
	public static void main(String args[]) {
		Saludo objetoSaludo;
		objetoSaludo = new Saludo();
		objetoSaludo.saludar("Bienvenido a PRG!");
	}
}
