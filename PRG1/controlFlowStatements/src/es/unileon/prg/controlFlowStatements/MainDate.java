package es.unileon.prg.controlFlowStatements;

public class MainDate{

	public static void main(String args[]){

			Date date = new Date(0,1,2008);
			Date otherDate = new Date();

			System.out.println(date.printNameSeason());
			System.out.println(date.getNumberYear());
			System.out.println(date.printDate());	
	}
}