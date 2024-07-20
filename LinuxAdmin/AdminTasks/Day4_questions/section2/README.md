1. Create a supplementary (Secondary) group called pgroup with group ID of 30000 
    `sudo groupadd -g 30000 pgroup`
2. Lock any user created account so he can't log in 
    `passwd -l username`
3. Delete user account 
    `sudo userdel username`
4. Delete group account
    `sudo groupdel pgroup`
5. State the difference between adduser and useradd with example shown
- adduser
    A high-level command that provides an interactive way to create a user and sets up user environments.
    - `sudo adduser username`
- useradd
    A low-level command that adds a user but requires additional options to specify details.
    - `sudo useradd -m -s /bin/bash username`