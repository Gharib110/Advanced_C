.PHONY: clean All

All:
	@echo "----------Building project:[ pthread_struct - Debug ]----------"
	@cd "pthread_struct" && "$(MAKE)" -f  "pthread_struct.mk"
clean:
	@echo "----------Cleaning project:[ pthread_struct - Debug ]----------"
	@cd "pthread_struct" && "$(MAKE)" -f  "pthread_struct.mk" clean
