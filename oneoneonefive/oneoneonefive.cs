public class FooBar {
    
    private int n;
    private Action _foo;
    private Action _bar;
    
    public FooBar(int n) {
        this.n = n;
    }

    public void Foo(Action printFoo) {
        
        _foo = printFoo;
        
        if(_bar != null)
            FooTheBars();
        
        return;
        
        for (int i = 0; i < n; i++) {
            
        	// printFoo() outputs "foo". Do not change or remove this line.
        	printFoo();
        }
    }

    public void Bar(Action printBar) {
        
        _bar = printBar;
        
        if(_foo != null)
            FooTheBars();
        
        return;
        
        for (int i = 0; i < n; i++) {
            
            // printBar() outputs "bar". Do not change or remove this line.
        	printBar();
        }
    }
    
    public void FooTheBars(){
        for(int i = 0; i < n; i++){
            _foo();
            _bar();
        }
    }
}
