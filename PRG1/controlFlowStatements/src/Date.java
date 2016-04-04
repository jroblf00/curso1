public class Date{

	
	private int _day;
	private int _month;
	private int _year;
	
	public Date(int day, int month, int year){
		
		if((day>0) && (day<32)){
			if((month==1) || (month==3) || (month==5) || (month==7) || (month==8)
			   || (month==10) || (month==12)){
				_day = day;
			}
			else if(((month==4) || (month==6) || (month==9) || (month==11)) 
					&& (day<31)){
				_day = day;
			}
			else if((month==2) && (day<29)){
				_day = day;
			}
		}
		
		if((month>0) && (month<13)){
			_month = month;
		}
		
		_year = year;
	}
	
	public void setNumberDay(int day){
		
		_day = day;
	}
	
	public void setNumberMonth(int month){
	
		_month = month;
	}
	
	public void setNumberYear(int year){
	
		_year = year;
	}
	
	public int getNumberDay(){
		
		return _day;
	}
	
	public int getNumberMonth(){
	
		return _month;
	}
	
	public int getNumberYear(){
	
		return _year;
	}
	
	public boolean isSameYear(Date date){
	
		return _year == date.getNumberYear();
	}
	
	public boolean isSameMonth(Date date){
	
		return _month == date.getNumberMonth();
	}
	
	public boolean isSameDay(Date date){
	
		return _day == date.getNumberDay();
	}
	
	public String printNameMonth(){
		
		String nameMonth = null;
		
		switch(_month){
		
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
		
		switch(_month){
		
			case 1:
			case 2:
			case 3:
				if((_day>20) && (_month==3)){
					season = "Spring";
				}else{
					season = "Winter";
				}
				break;
			case 4:
			case 5:
			case 6:
				if((_day>20) && (_month==6)){
					season = "Summer";
				}else{
					season = "Spring";
				}
				break;
			case 7:
			case 8:
			case 9:
				if((_day>22) && (_month==9)){
					season = "Autumn";
				}else{
					season = "Summer";
				}
				break;
			case 10:
			case 11:
			case 12:
				if((_day>20) && (_month==12)){
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
















