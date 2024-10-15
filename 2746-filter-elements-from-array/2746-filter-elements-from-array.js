/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let n=arr.length
    let newArray=[]
    for(let i=0;i<n;i++){
        let val=fn(arr[i],i)
        if(val)
        newArray.push(arr[i])
    }
    return newArray
};