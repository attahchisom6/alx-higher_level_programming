#!/usr/bin/node
/*
 * This script is designed to fetch a response from a web_page and return its status code
 */

const request = require('request');
request.get(process.argv[2], (error, response) => {
  if (error) {
    console.log(error);
  } else {
    console.log('code: ' + response.statusCode);
  }
});
