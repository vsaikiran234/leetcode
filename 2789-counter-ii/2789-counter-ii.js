
var createCounter = function(init) {
    let currentValue = init

    return {
        increment:function(){
            return currentValue += 1
        },

        decrement:function(){
            return currentValue -= 1
        },

        reset:function(){
            return currentValue = init
        }
    }

};