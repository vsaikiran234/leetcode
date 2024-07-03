var timeLimit = function(fn,p) {
    
 return async function(...args) {
        return new Promise((resolve, reject) => {
            const timer = setTimeout(() => {
                reject("Time Limit Exceeded")
            }, p)

            fn(...args)
                .then((result) => {
                    clearTimeout(timer)
                    resolve(result)
                })
                .catch((err) => {
                    clearTimeout(timer)
                    reject(err)
                })
        })
    }
};