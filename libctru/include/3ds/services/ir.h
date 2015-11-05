/**
 * @file ir.h
 * @brief IR service.
 */
#pragma once

/**
 * @brief Initializes IRU.
 * The permissions for the specified memory is set to RO. This memory must be already mapped.
 * @param sharedmem_addr Address of the shared memory block to use.
 * @param sharedmem_size Size of the shared memory block.
 */
Result IRU_Initialize(u32 *sharedmem_addr, u32 sharedmem_size);

/// Shuts down IRU.
Result IRU_Shutdown(void);

/**
 * @brief Gets the IRU service handle.
 * @return The IRU service handle.
 */
Handle IRU_GetServHandle(void);

/**
 * @brief Sends IR data.
 * @param buf Buffer to send data from.
 * @param size Size of the buffer.
 * @param wait Whether to wait for the data to be sent.
 */
Result IRU_SendData(u8 *buf, u32 size, u32 wait);

/**
 * @brief Receives IR data.
 * @param buf Buffer to receive data to.
 * @param size Size of the buffer.
 * @param flag Flags to receive data with.
 * @param transfercount Pointer to write the bytes read to.
 * @param wait Whether to wait for the data to be received.
 */
Result IRU_RecvData(u8 *buf, u32 size, u8 flag, u32 *transfercount, u32 wait);

/**
 * @brief Sets the IR bit rate.
 * @param value Bit rate to set.
 */
Result IRU_SetBitRate(u8 value);

/**
 * @brief Gets the IR bit rate.
 * @param out Pointer to write the bit rate to.
 */
Result IRU_GetBitRate(u8 *out);

/**
 * @brief Sets the IR LED state.
 * @param value IR LED state to set.
 */
Result IRU_SetIRLEDState(u32 value);

/**
 * @brief Gets the IR KED state.
 * @param out Pointer to write the IR LED state to.
 */
Result IRU_GetIRLEDRecvState(u32 *out);
