package es.unileon.prg.controlFlowStatements;

public class MainDate{

	public static void main(String args[]){
		
		Date date = new Date(24,13,2008);
		
		System.out.println(date.printNameMonth());
		System.out.println(date.printNameSeason());
	}
}