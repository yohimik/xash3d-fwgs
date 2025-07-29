mergeInto(LibraryManager.library, {
    sendto_js: function(sockfd, packets, sizes, packet_count, seq_num, to, to_len) {
        console.log('sendto');
    },
    recvfrom_js: function(sockfd, buf, len, flags, src_addr, addrlen) {
        console.log('recvfrom');
    },
});