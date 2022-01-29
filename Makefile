.PHONY: clean All

All:
	@echo "----------Building project:[ pthread_return_func - Debug ]----------"
	@cd "pthread_return_func" && "$(MAKE)" -f  "pthread_return_func.mk"
clean:
	@echo "----------Cleaning project:[ pthread_return_func - Debug ]----------"
	@cd "pthread_return_func" && "$(MAKE)" -f  "pthread_return_func.mk" clean
