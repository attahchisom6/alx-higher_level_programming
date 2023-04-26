#!/usr/bin/node
/*
 * fetches a web pags from the star wars api then filter out the number of times the character 'Wedge Antilles' occired
 */

const request = require('require');
const charId = '18';
const url = process.argv[2];

request.get(url, (error, response, body) => {
  if (error) {
    console.log(error);
  } else {
    let count = 0;
    const films = JSON.parse(body).results;
    films.forEach(movie => {
      movie.characters.forEach(character => {
        if (character.includes(charId)) {
          count += 1;
        }
      });
    });
    console.log(count);
  }
});
