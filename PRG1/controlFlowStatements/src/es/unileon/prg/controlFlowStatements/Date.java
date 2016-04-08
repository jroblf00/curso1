package es.unileon.prg.controlFlowStatements;

public class Date{
	
	private int day;
	private int month;
	private int year;
	
	public Date(){
		
		this.day = 1;
		this.month = 1;
		this.year = 2000;
	}
	
	public Date(int month, int day, int year){
		try{
			
		setNumberMonth(month);
		setNumberDay(day);
		setNumberYear(year);
		}catch (DateException ex){
			ex.getMessage();
		}
	}
	
	public void setNumberDay(int day) throws DateException{
		
		StringBuffer errorMessage = new StringBuffer();
		
		try{
			if(((this.month==1) || (this.month==3) || (this.month==5) || (this.month==7) || (this.month==8)
			   	|| (this.month==10) || (this.month==12)) && ((day<1) || (day>31))){
				errorMessage.append("El dia ingresado no es valido, ingrese un valor del 1 al 31");	
			}
		
			else if(((this.month==4) || (this.month==6) || (this.month==9) || (this.month==11)) 
						&& ((day<0) || (day>30))){
				errorMessage.append("El dia ingresado no es valido, ingrese un valor del 1 al 30");	
			}
		
			else if((this.month==2) && ((day<0) || (day>28))){
				errorMessage.append("El dia ingresado no es valido, ingrese un valor del 1 al 28");
			}
			
			if(errorMessage.length()!=0){
			
				throw new DateException(errorMessage.toString());
			
			}else{
		
				this.day = day;
			}
			}catch (DateException e){
				System.err.println(e.getMessage());
			}
	}
	
	public void setNumberMonth(int month) throws DateException{
	
		StringBuffer errorMessage = new StringBuffer();
		try{
			if((month<1) || (month>12)){
				errorMessage.append("El mes ingresado no es valido, ingrese un valor del 1 al 12");	
			}
			if(errorMessage.length()!=0){

				throw new DateException(errorMessage.toString());

			}else{
				this.month = month;
			}
		}catch (DateException e){
			System.err.println(e.getMessage());
		}
	}
	
	public void setNumberYear(int year) throws DateException{
		
		StringBuffer errorMessage = new StringBuffer();
		
		try{
			if(year<1){
				errorMessage.append("El mes ingresado no es valido, ingrese un valor mayor a 0 para el año");	
			}
			if(errorMessage.length()!=0){

				throw new DateException(errorMessage.toString());

			}else{
				this.year = year;
			}
		}catch (DateException e){
			System.err.println(e.getMessage());
		}
	}
	
	public int getNumberDay(){
		
		return this.day;
	}
	
	public int getNumberMonth(){
	
		return this.month;
	}
	
	public int getNumberYear(){
	
		return this.year;
	}
	
	public boolean isSameYear(Date date){
	
		return this.year == date.getNumberYear();
	}
	
	public boolean isSameMonth(Date date){
	
		return this.month == date.getNumberMonth();
	}
	
	public boolean isSameDay(Date date){
	
		return this.day == date.getNumberDay();
	}
	
	public String printNameMonth(int month){
		
		String nameMonth = null;
		
		switch(month){
		
			case 1:
				nameMonth = "January";
				break;
			case 2:
				nameMonth = "February";
				break;
			case 3:
				nameMonth = "March";
				break;
			case 4:
				nameMonth = "April";
				break;
			case 5:
				nameMonth = "May";
				break;
			case 6:
				nameMonth = "June";
				break;
			case 7:
				nameMonth = "July";
				break;
			case 8:
				nameMonth = "August";
				break;
			case 9:
				nameMonth = "Seyearptember";
				break;
			case 10:
				nameMonth = "October";
				break;
			case 11:
				nameMonth = "November";
				break;
			case 12: 
				nameMonth = "December";
				break;
		}
		
		return nameMonth;
	}
	
	public String printNameSeason(){
		
		String season = null;
		
		switch(this.month){
		
			case 1:
			case 2:
			case 3:
				if((this.day>20) && (this.month==3)){
					season = "Spring";
				}else{
					season = "Winter";
				}
				break;
			case 4:
			case 5:
			case 6:
				if((this.day>20) && (this.month==6)){
					season = "Summer";
				}else{
					season = "Spring";
				}
				break;
			case 7:
			case 8:
			case 9:
				if((this.day>22) && (this.month==9)){
					season = "Autumn";
				}else{
					season = "Summer";
				}
				break;
			case 10:
			case 11:
			case 12:
				if((this.day>20) && (this.month==12)){
					season = "Winter";
				}else{
					season = "Autumn";
				}
				break;
		}
	
		return season;
	}
	
	public String printMonthLeftUntilEndOfYear(){
	
		StringBuffer nextMonth = new StringBuffer();
		int month = this.month; 
		for(int i=month+1;i<13;i++){
			
			nextMonth.append(printNameMonth(i)+" ");
		}
		return nextMonth.toString();
	}
	
	public int dayOfMonth(int month){
	
		int days;
		
		if((month==1) || (month==3) || (month==5) || (month==7)
		  || (month==8) || (month==10) || (month==12)){
			
			days = 31;
		}
		
		else if((month==4) || (month==6) || (month==9) || (month==11)){
			
			days = 30;
		}else{
			
			days = 28;
		}
		
		return days;
	}
	
	public String allDatesUntilEndMonth(){
	
		StringBuffer days = new StringBuffer();
		int numberDay = getNumberDay();
		
		for(int i=numberDay+1;i<dayOfMonth(this.month);i++){
			
			days.append(i+" ");
		}
	
		return days.toString();
	}
	
	public String MonthSameNumber(){
	
		StringBuffer months = new StringBuffer();
		
		for(int i=1;i<13;i++){
		
			if(dayOfMonth(this.month)==dayOfMonth(i)){
				
				months.append(printNameMonth(i)+" ");			
			}
		}
		return months.toString();
	}
	
	public int countDaysOfYear(){
	
		int daysOfYear=0;
		
		for(int i=1;i<13;i++){
		
			daysOfYear = daysOfYear + dayOfMonth(i); 
		}
		
		return daysOfYear;
	}
	
	public String printDate(){
	
		StringBuffer date = new StringBuffer();
		
		date.append(printNameMonth(this.month)+","+this.day+","+this.year);
		
		return date.toString();
	}
}