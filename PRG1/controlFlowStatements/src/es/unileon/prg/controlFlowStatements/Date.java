package es.unileon.prg.controlFlowStatements;

public class Date{

	
	private int day;
	private int month;
	private int year;
	
	public Date(){
	}
	
	public Date(int day, int month, int year){
		try{
			
		setNumberMonth(month);
		setNumberDay(day);
		setNumberYear(year);
		}catch
			
	}
	
	public void setNumberDay(int day) throws DateException{
		
		StringBuffer errorMessage = new StringBuffer();
		
		if(((this.month==1) || (this.month==3) || (this.month==5) || (this.month==7) || (this.month==8)
			   || (this.month==10) || (this.month==12)) && ((day<1) || (day>31))){
			errorMessage.append("Error day");	
		}
		
		else if(((this.month==4) || (this.month==6) || (this.month==9) || (this.month==11)) 
					&& ((day<0) || (day>30))){
			errorMessage.append("Error day");	
		}
		
		else if((this.month==2) && ((day<0) || (day>28))){
			errorMessage.append("Error day");
		}
		else if(errorMessage.length()!=0){
			
			throw new DateException(errorMessage.toString());
			
		}else{
		
			this.day = day;
		}
	}
	
	public void setNumberMonth(int month) throws DateException{
	
		StringBuffer errorMessage = new StringBuffer();
		
		if((month<1) || (month>12)){
			errorMessage.append("Error month");	
		}
		else if(errorMessage.length()!=0){
			
			throw new DateException(errorMessage.toString());
			
		}else{
			this.month = month;
		}
	}
	
	public void setNumberYear(int year) throws DateException{
		
		StringBuffer errorMessage = new StringBuffer();
	
		if(year<0){
			errorMessage.append("Error year");	
		}
		else if(errorMessage.length()!=0){
			
			throw new DateException(errorMessage.toString());
			
		}else{
			this.year = year;
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
	
	public String printNameMonth(){
		
		String nameMonth = null;
		
		switch(this.month){
		
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
	
	/*public String printMonthLeftUntilEndOfYear(Date date){
	
		for(int i=_month;i<13;i++){
			
			
		}
		return ;
	}*/
}
















