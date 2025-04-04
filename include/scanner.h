/**
 * Port Scanner - A simple network port scanner
 * scanner.h - Scanner functionality declarations
 *
 * This header file declares the functions related to port scanning.
 */

#ifndef SCANNER_H // Include guard to prevent multiple inclusion
#define SCANNER_H

/**
 * Scans a range of ports on the specified target host.
 *
 * This function attempts to connect to each port in the specified range
 * on the target host. It reports which ports are open.
 *
 * @param target The hostname or IP address to scan
 * @param start_port The first port to scan
 * @param end_port The last port to scan
 * @return The number of open ports found
 */
int scan_ports(const char *target, int start_port, int end_port);

/**
 * Scans common ports on the specified target host.
 *
 * This function attempts to connect to a predefined list of common ports
 * on the target host. It reports which ports are open.
 *
 * @param target The hostname or IP address to scan
 * @return The number of open ports found
 */
int scan_common_ports(const char *target);

/**
 * Checks if a specific port is open on the target host.
 *
 * This function attempts to establish a TCP connection to the specified port.
 * If the connection succeeds, the port is considered open.
 *
 * @param target The hostname or IP address to check
 * @param port The port number to check
 * @return 1 if the port is open, 0 if closed or error
 */
int is_port_open(const char *target, int port);

#endif /* SCANNER_H */ // End of include guard