# Create a file with the content "I love Puppet" and set the permissions to 0744.
# The file should be owned by the user www-data and the group www-data.
file { '/tmp/school':
  ensure  => present,
  content => 'I love Puppet',
  mode    => '0744',
  owner   => 'www-data',
  group   => 'www-data',
}

