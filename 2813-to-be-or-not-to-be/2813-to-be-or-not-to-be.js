
var expect = function(val) {
    function toBe(valq) {
       if (val === valq) {
           return true
       } else {
           throw new Error('Not Equal')
       }
    }

    function notToBe(valq){
        if (val !== valq) {
            return true
        } else {
            throw new Error('Equal')
        }
    }

    return {
        toBe,
        notToBe
    }
};
