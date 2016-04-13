package es.unileon.prg1.bank;

import static org.junit.Assert.*;

import org.junit.Before;
import org.junit.Test;

public class AccountTest {

	private Account johnAccount;
	private Person john;
	
	@Before
	public void setUp() throws Exception {
		this.john = new Person("John");
		this.johnAccount = new Account ( this.john, 1000);
	}

	@Test
	public void testAccountAccount() {
		Account anotherJohnAccount;
		
		anotherJohnAccount = new Account(this.johnAccount);
		assertEquals(this.john.getName(), anotherJohnAccount.getOwner().getName());
		assertNotSame(this.john, anotherJohnAccount.getOwner());
		assertEquals(1000, anotherJohnAccount.getBalance());
	}

	@Test
	public void testAccountPerson() {
		Account anotherJohnAccount;
		
		anotherJohnAccount = new Account(this.john);
		assertEquals(this.john.getName(), anotherJohnAccount.getOwner().getName());
		assertNotSame(this.john, anotherJohnAccount.getOwner());
		assertEquals(0, anotherJohnAccount.getBalance());
	}

	@Test
	public void testAccountPersonInt() {
		assertEquals(this.john.getName(), this.johnAccount.getOwner().getName());
		assertNotSame(this.john, this.johnAccount.getOwner());
		assertEquals(1000, this.johnAccount.getBalance());
	}

	@Test
	public void testGetBalance() {
		assertEquals(1000, this.johnAccount.getBalance());
	}

	@Test
	public void testGetOwner() {
		assertEquals(this.john.getName(), this.johnAccount.getOwner().getName());
		assertNotSame(this.john, this.johnAccount.getOwner());
	}

	@Test
	public void testDeposit() {
		johnAccount.deposit(100);
		assertEquals(1100, johnAccount.getBalance());
	}

	@Test
	public void testWithdraw() {
		johnAccount.withdraw(100);
		assertEquals(900, johnAccount.getBalance());
	}
	
	@Test
	public void testBasicTypeParameterBalance() {
		Account charlesAccount;
		int money;

		// a new account is created for Charles
		charlesAccount = new Account( new Person( "Charles" ) );
		// a value is assigned to the int variable
		money = 1000;
		// the int variable is used as parameter
		charlesAccount.deposit(money);
		// a different value is assigned to the int variable
		money = 500;
		
		// changing the value of the external int variable money
		// should not affect the int attribute of charlesAccount
		assertEquals(charlesAccount.getBalance(), 1000);
	}
	
	@Test
	public void testNotBasicTypeParameterOwner() {
		Account charlesAccount;
		Person charles;
		
		// a new Person object is created
		// a value is assigned to the name of the Person object
		charles = new Person( "Charles" );
		// the Person object is used as parameter
		charlesAccount = new Account( charles, 3000 );
		// a different value is assigned to the name of the Person variable
		charles.setName("Charlie");

		// changing the value of the external Person variable charles
		// should not affect the Person attribute of charlesAccount
		assertEquals(charlesAccount.toString(), "Account: Charles - Balance: 3000");
	}
	
	@Test
	public void testBasicTypeReturnValue() {
		int money;
		
		// money is obtained as a return value
		money = this.johnAccount.getBalance();
		// the value of money is changed
		money = 500;
		// changing the value of the external int variable money
		// should not affect the int attribute of johnAccount
		assertEquals(this.johnAccount.getBalance(), 1000);		
	}

	@Test
	public void testNotBasicTypeReturnValue() {
		Person aPerson;
		
		// aPerson is obtained as a return value
		aPerson = this.johnAccount.getOwner();
		// the name of aPerson is changed
		aPerson.setName("Johnie");
		// changing the value of the external Person variable aPerson
		// should not affect the Person attribute of johnAccount
		assertEquals(this.johnAccount.toString(), "Account: John - Balance: 1000");		
	}

	@Test
	public void testToString() {
		assertEquals("Account: John - Balance: 1000", this.johnAccount.toString());
	}

}
