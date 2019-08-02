public class Foo {

    private List<Action> _actionList = new List<Action>();
    
    private bool _firstFinished;
    private bool _secondFinished;
    private bool _thirdFinished;
    
    public Foo() { _firstFinished = _secondFinished = _thirdFinished = false; }

    public void First(Action printFirst) {
        
        _firstFinished = true;
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        
        if(!_secondFinished)
            return;
        
        foreach(Action a in _actionList)
            a();
    }

    public void Second(Action printSecond) {
        
        _secondFinished = true;
        
        if(!_firstFinished){
            _actionList.Insert(0, printSecond);
            return;
        }
        
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        
        if(!_thirdFinished)
           return;
        
        foreach(Action a in _actionList)
            a();
    }

    public void Third(Action printThird) {
        
        _thirdFinished = true;
        
        if(!_firstFinished || !_secondFinished){
            _actionList.Add(printThird);
            return;
        }
        
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
}
