var compose = function(functions) {
    if (functions.length === 0) {
        return function(p) {
            return p
        }
    } else {
        return function(p) {
            let result = p
            for (let i = functions.length - 1; i >= 0; i--) {
                result = functions[i](result)
            }
            return result;
        }
    }
};