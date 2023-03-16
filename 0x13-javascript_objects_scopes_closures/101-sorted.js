#!/usr/bin/node
/*
 * import a new dictionary, then from it create a new dictionary
 * where the keys will be the number of occirrences
 */

const dict = require('./101-data').dict;
const newDict = {};

Object.keys(dict).map(function (key) {
  if (newDict[dict[key]] === undefined) {
    newDict[dict[key]] = [];
  }
  newDict[dict[key]].push(key);
  return (newDict);
});
console.log(newDict);
