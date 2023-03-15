#!/usr/bin/node
class Rectangle {
  constructor (w, h) {
    if (w > 0 && h > 0) {
      this.width = w;
      this.height = h;
    }
  }

  print () {
    for (let p = 0; p < this.height; p++) {
      let str = '';
      for (let k = 0; k < this.width; k++) {
        str += 'X';
      }
      console.log(str);
    }
  }

  rotate () {
    let rot = 0;

    rot = this.height;
    this.height = this.width;
    this.width = rot;
  }

  double () {
    this.width = 2 * this.width;
    this.height = 2 * this.height;
  }
} module.exports = Rectangle;
