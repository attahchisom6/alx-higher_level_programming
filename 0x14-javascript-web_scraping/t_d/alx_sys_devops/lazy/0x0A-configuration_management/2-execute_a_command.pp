# This is a simple example of how to use the exec resource to kill a process
exec { 'pkill-process':
  command => '/usr/bin/pkill killmenow',
  onlyif  => '/usr/bin/pgrep killmenow',
}
