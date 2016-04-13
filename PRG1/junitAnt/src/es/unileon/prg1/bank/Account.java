/*
Una vez hechas las modificaciones el test ya no falla porque 
*/

package es.unileon.prg1.bank;

class Account{
		
	private Person owner;
	private int balance;
	
	Account (Account another){
		this.owner = new Person(another.getOwner());//añadido
		this.balance = another.getBalance();
	}
	
	
    Account(Person owner){
    	this.owner = new Person(owner);//añadido
   		this.balance = 0;
    }
	
    Account(Person owner, int balance){
    	this.owner = new Person(owner);//añadido
   		this.balance = balance;
    }
    
    int getBalance(){
    	return balance;
    }
    
    Person getOwner(){
    	return new Person(this.owner);//añadido
    }
    
    void deposit (int amount){
    		this.balance += amount;
    }
    
    void withdraw (int amount){
    		this.balance -= amount;
    }

    public String toString(){
    	    return "Account: " + 
    	    owner.toString() +
    	    " - Balance: " + balance;
    }

}
