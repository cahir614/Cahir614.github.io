# chmod

linux permission for

* The file owner.
* The group members.
* Others (everybody else).

are

* 7, rwx: Read, write, and execute.
* 6, rw-: Read and write.
* 5, r-x: Read and execute.
* 4, r--: Read-only.
* 3, -wx: Write and execute.
* 2, -w-: Write only.
* 1, --x: Execute only.
* 0, ---: None.


```sh
chmod 714 test.sh
```
gives the owner rights to read,execute and wright,
group members rights to execute,
and everybody else rights to read-only.
