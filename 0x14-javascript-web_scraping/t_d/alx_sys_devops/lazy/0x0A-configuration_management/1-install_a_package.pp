# Install Flask if it is not already installed
package { 'flask':
  ensure   => '2.1.0',
  provider => 'pip',
}
