/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {

    if (s.length != t.length) {
        return false;
    }

    let countS = new Map();
    let countT = new Map();

    for (let i = 0; i < s.length; i++) {
        if (countS.has(s[i])) {
            let val = countS.get(s[i]);
            countS.set(s[i], val + 1);
        } else {
            countS.set(s[i], 1);
        }

        if (countT.has(t[i])) {
            let val = countT.get(t[i]);
            countT.set(t[i], val + 1);
        } else {
            countT.set(t[i], 1);
        }
    }

    if (countS.size !== countT.size) {
        return false;
    }

    for (const chr of s) {
        if (countS.get(chr) !== countT.get(chr)) {
            return false
        }
    }

    return true;

};