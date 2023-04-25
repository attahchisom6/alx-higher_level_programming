#!/usr/bin/node

/*
 * Script to get the title of episode if a given integer matches the episode number
 */

const request = require('request');
const epiNum = process.argv[2];
const url = `https://swapi-api.alx-tools.com/api/films/${epiNum}`;

request.get(url, (error, response, body) => {
  if (error) {
    console.log(error);
  } else {
    const Jresponse = JSON.parse(body);
    console.log(Jresponse.title);
  }
});
