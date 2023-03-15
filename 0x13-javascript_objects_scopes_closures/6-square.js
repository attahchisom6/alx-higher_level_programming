#!/usr/bin/node
/*
 * this module is to initalize a child clasd
 */

const LastSquare = require('./5-square');
class Square extends LastSquare {
  charPrint (c) {
    if (c === undefined) {
      this.print();
    } else {
      for (let p = 0; p < this.height; p++) {
        let str = '';
        for (let k = 0; k < this.width; k++) {
          str += c;
        }
        console.log(str);
      }
    }
  }
} module.exports = Square;
