#!/usr/bin/node

/*
 * script to get the content of an Api and store it in a file
 * Args:
 *  arg1: web page to fetch
 *  arg2: name of the file to hold the return web page content
 */

const request = require('request');
const url = process.argv[2];
const file = process.argv[3];

request.get(url, (error, response, body) => {
  if (error) {
    console.log(error);
  } else {
    const fs = require('fs');
    fs.writeFile(file, body, 'utf8', (error) => {
      if (error) {
        console.log(error);
      }
    });
  }
});
